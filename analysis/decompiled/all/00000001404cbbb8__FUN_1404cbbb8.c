// Function: FUN_1404cbbb8
// Addr: 1404cbbb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbbb8(char *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  int in_EAX;
  int *piVar3;
  byte *unaff_RBX;
  byte in_CF;
  
  iRam000000014160bbc4 = (iRam000000014160bbc4 - (int)&stack0x00000000) - (uint)in_CF;
  bVar2 = (byte)(in_EAX + 0x3600470);
  *param_2 = *param_2 ^ bVar2;
  bVar2 = (bVar2 & (byte)param_2) * '\x02';
  uVar1 = CONCAT31((int3)((uint)(in_EAX + 0x3600470) >> 8),bVar2);
  piVar3 = (int *)(ulonglong)uVar1;
  *piVar3 = *piVar3 + uVar1;
  *param_1 = *param_1 + bVar2;
  *unaff_RBX = *unaff_RBX | bVar2;
  *(char *)piVar3 = (char)*piVar3 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

