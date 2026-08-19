// Function: FUN_1404d7744
// Addr: 1404d7744
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7744(char *param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 in_EAX;
  int iVar3;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  byte in_CF;
  
  bVar2 = (byte)in_EAX - 0x3c;
  iVar3 = CONCAT31((int3)((uint)in_EAX >> 8),bVar2 + in_CF);
  *(uint *)CONCAT44(in_register_00000004,iVar3) =
       (*(int *)CONCAT44(in_register_00000004,iVar3) - iVar3) -
       (uint)(0x3b < (byte)in_EAX || CARRY1(bVar2,in_CF));
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,iVar3) + unaff_RBX);
  *pbVar1 = *pbVar1 | param_2;
  *param_1 = *param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

