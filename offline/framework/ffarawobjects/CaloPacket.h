#ifndef FUN4ALLRAW_CALOPACKET_H
#define FUN4ALLRAW_CALOPACKET_H

#include "OfflinePacketv1.h"

#include <array>
#include <limits>

class  CaloPacket: public OfflinePacketv1
  {

public:
    CaloPacket() = default;
  CaloPacket(CaloPacket *pkt): OfflinePacketv1(pkt) {}
    ~CaloPacket() override = default;

  virtual void setFemClock(int /*i*/, uint32_t /*clk*/) {return;}
  virtual uint32_t getFemClock(int /*i*/) const {return std::numeric_limits<uint32_t>::max();} 
  virtual void setFemEvtSequence(int /*i*/,int /*j*/) {return;}
  virtual int getFemEvtSequence(int /*i*/) const {return std::numeric_limits<int>::max();}
  virtual void setFemSlot(int /*i*/,int /*j*/) {return;}
  virtual int getFemSlot(int /*i*/) const {return std::numeric_limits<int>::max();}

  virtual void setSample(int /*ipmt*/, int /*ichan*/, uint32_t /*val*/) {return;}
  virtual uint32_t getSample(int /*ipmt*/, int /*ichan*/) const {return std::numeric_limits<uint32_t>::max();} 
  virtual void setPacketEvtSequence(int /*i*/) {return;}
  virtual int getPacketEvtSequence() const {return std::numeric_limits<int>::max();}
  virtual void setNrChannels (int /*i*/) {return;}
  virtual int getNrChannels() const {return 0;}
  virtual void setNrSamples (int /*i*/) {return;}
  virtual int getNrSamples() const {return 0;}
  virtual void setNrModules(int /*i*/) {return;}
  virtual int getNrModules() const {return 0;}
  virtual void setEvenChecksum(int /* i */)  {return;}
  virtual int getEvenChecksum() const  {return std::numeric_limits<int>::max();}
  virtual void setOddChecksum(int /* i */)  {return;}
  virtual int getOddChecksum() const  {return std::numeric_limits<int>::max();}
  virtual void setCalcEvenChecksum(int /* i */)  {return;}
  virtual int getCalcEvenChecksum() const  {return std::numeric_limits<int>::max();}
  virtual void setCalcOddChecksum(int /* i */)  {return;}
  virtual int getCalcOddChecksum() const  {return std::numeric_limits<int>::max();}
  virtual void setModuleAddress(int /*i*/) {return;}
  virtual int getModuleAddress() const {return std::numeric_limits<int>::max();}
  virtual void setDetId(int /*i*/) {return;}
  virtual int getDetId() const {return std::numeric_limits<int>::max();}

private:
  ClassDefOverride(CaloPacket,1)
};

#endif
