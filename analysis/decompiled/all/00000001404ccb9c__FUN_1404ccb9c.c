// Function: FUN_1404ccb9c
// Addr: 1404ccb9c
// Size: 1 bytes


uint FUN_1404ccb9c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  byte *in_RAX;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  byte *unaff_RSI;
  bool bVar3;
  byte unaff_retaddr;
  
  *(uint *)(unaff_RSI + (longlong)in_RAX) = *(uint *)(unaff_RSI + (longlong)in_RAX) & unaff_EBX;
  bVar3 = CARRY1(unaff_retaddr,(byte)unaff_EBX);
  bVar2 = (byte)in_RAX - *in_RAX;
  pcVar1 = (char *)(unaff_RBP + CONCAT44(unaff_0000001c,unaff_EBX));
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8) + ((byte)in_RAX < *in_RAX || bVar2 < bVar3);
  unaff_RSI[CONCAT44(unaff_0000001c,unaff_EBX)] =
       unaff_RSI[CONCAT44(unaff_0000001c,unaff_EBX)] | (byte)((ulonglong)in_RAX >> 8);
  *unaff_RSI = *unaff_RSI & (byte)((ulonglong)param_1 >> 8);
  return CONCAT31((int3)((ulonglong)in_RAX >> 8),(bVar2 - bVar3) * '\x02') ^ 0x352e6800;
}

