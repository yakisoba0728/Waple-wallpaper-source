// Function: FUN_1404d1ae0
// Addr: 1404d1ae0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1ae0(longlong param_1,uint param_2)

{
  byte bVar1;
  uint in_EAX;
  uint uVar2;
  char *pcVar4;
  undefined8 *unaff_RSI;
  byte in_CF;
  undefined8 in_MM1;
  byte *pbVar3;
  
  pshufw(in_MM1,*unaff_RSI,0x60);
  uVar2 = in_EAX * 2 + (uint)(CARRY4(param_2,in_EAX) || CARRY4(param_2 + in_EAX,(uint)in_CF)) |
          0x1300c50;
  bVar1 = (byte)uVar2 | bRam0000000146af24f3;
  pbVar3 = (byte *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar1);
  pcVar4 = (char *)(param_1 + -1);
  if (pcVar4 == (char *)0x0 || bVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar3 = *pbVar3 ^ bVar1;
  *pcVar4 = *pcVar4 + (char)(uVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

