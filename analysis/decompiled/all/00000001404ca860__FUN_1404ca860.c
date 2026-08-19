// Function: FUN_1404ca860
// Addr: 1404ca860
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca860(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  undefined3 uVar1;
  byte bVar2;
  uint uVar3;
  longlong in_RAX;
  byte *pbVar4;
  char *unaff_RBX;
  longlong unaff_RDI;
  byte in_CF;
  
  *(int *)(unaff_RDI + in_RAX) = *(int *)(unaff_RDI + in_RAX) + (int)&stack0x00000000 + (uint)in_CF;
  uVar3 = (int)in_RAX + 0x40000634;
  uVar1 = (undefined3)(uVar3 >> 8);
  bVar2 = (byte)uVar3 ^ *(byte *)(ulonglong)uVar3;
  bVar2 = bVar2 ^ *(byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  pbVar4 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  *param_4 = *param_4 + (char)&stack0xfffffffffffffff8;
  *pbVar4 = *pbVar4 + bVar2;
  pbVar4[-5] = pbVar4[-5] + bVar2;
  *param_4 = *param_4 + (bVar2 ^ *pbVar4 ^ *(byte *)(ulonglong)CONCAT31(uVar1,bVar2 ^ *pbVar4));
  *unaff_RBX = *unaff_RBX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

