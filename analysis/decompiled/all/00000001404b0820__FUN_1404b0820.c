// Function: FUN_1404b0820
// Addr: 1404b0820
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0820(longlong param_1,uint *param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong in_RAX;
  byte bVar3;
  uint unaff_EBX;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  *(char *)(in_RAX + param_1) = *(char *)(in_RAX + param_1) + bVar3;
  pbVar1 = (byte *)(in_RAX + -0x47ffea7d);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  iRam000000018b509c30 = iRam000000018b509c30 + (uint)CARRY1(bVar2,bVar3);
  *param_2 = *param_2 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

