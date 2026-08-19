// Function: FUN_1404cfff8
// Addr: 1404cfff8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfff8(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint in_EAX;
  byte *pbVar4;
  int *unaff_RBX;
  
  param_2[0x397020] = param_2[0x397020] + (char)in_EAX;
  *param_2 = *param_2 >> 5 | *param_2 << 3;
  uVar2 = (in_EAX | 0xc) + 0x3e50003;
  pbVar4 = (byte *)(ulonglong)uVar2;
  bVar1 = *pbVar4;
  bVar3 = (byte)uVar2;
  *pbVar4 = *pbVar4 + bVar3;
  *unaff_RBX = *unaff_RBX + (int)param_2 + (uint)CARRY1(bVar1,bVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

