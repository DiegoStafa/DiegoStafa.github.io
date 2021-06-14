#include <string>
#include <typeinfo>
#include <vector>

class FileAudio
{
private:
  std::string titolo;
  double size;

public:
  virtual FileAudio *clone() const = 0;
  virtual bool qualita() const = 0;
  virtual ~FileAudio() {}
  double getSize() const { return size; }
  virtual bool operator==(const FileAudio &f) const
  {
    return typeid(*this) == typeid(f) && titolo == f.titolo && size == f.size;
  }
};

class Mp3 : public FileAudio
{
private:
  unsigned int Kbits;

public:
  static const unsigned int sogliaQualita;
  Mp3 *clone() const override
  {
    return new Mp3(*this);
  }
  bool qualita() const override { return Kbits >= sogliaQualita; }
  unsigned int getBitrate() const { return Kbits; }
  bool operator==(const FileAudio &f) const override
  {
    return FileAudio::operator==(f) && Kbits == static_cast<const Mp3 &>(f).Kbits;
  }
};
const unsigned int Mp3::sogliaQualita = 192;

class WAV : public FileAudio
{
private:
  unsigned int frequenza;
  bool lossLess;

public:
  static const unsigned int sogliaQualita;
  WAV *clone() const override
  {
    return new WAV(*this);
  }
  bool qualita() const override { return frequenza >= sogliaQualita; }
  bool getLossLess() const { return lossLess; }
  bool operator==(const FileAudio &f) const override
  {
    return FileAudio::operator==(f) && frequenza == static_cast<const WAV &>(f).frequenza &&
           lossLess == static_cast<const WAV &>(f).lossLess;
  }
};
const unsigned int WAV::sogliaQualita = 96;

class iZod
{
private:
  class Brano
  {
  public:
    FileAudio *ptr; // puntatore (super)polimorfo
    // conversione FileAudio* => Brano
    Brano(FileAudio *p) : ptr(p->clone()) {}
    Brano(const Brano &b) : ptr(b.ptr->clone()) {}
    Brano &operator=(const Brano &b)
    {
      if (this != &b)
      {
        delete ptr;
        ptr = b.ptr->clone();
      }
      return *this;
    }
    ~Brano() { delete ptr; }
  };

  std::vector<Brano> brani;

public:
  std::vector<Mp3> mp3(double dim, int br) const
  {
    std::vector<Mp3> v;
    for (std::vector<Brano>::const_iterator cit = brani.begin(); cit != brani.end(); ++cit)
    {
      Mp3 *p = dynamic_cast<Mp3 *>(cit->ptr);
      if (p != nullptr && p->getSize() >= dim && p->getBitrate() >= br)
        v.push_back(*p);
    }
    return v;
  }

  std::vector<FileAudio *> braniQual() const
  {
    std::vector<FileAudio *> v;
    for (auto cit = brani.begin(); cit != brani.end(); cit++)
      if ((cit->ptr)->qualita() &&
          (dynamic_cast<WAV *>(cit->ptr) == nullptr ||
           static_cast<WAV *>(cit->ptr)->getLossLess()))
        v.push_back(cit->ptr);
    return v;
  }

  void insert(Mp3 *p)
  {
    bool found = false;
    for (auto it = brani.begin(); !found && it != brani.end(); ++it)
      if (*(it->ptr) == *p)
        found = true;
    if (!found)
      brani.push_back(p);
  }
};
