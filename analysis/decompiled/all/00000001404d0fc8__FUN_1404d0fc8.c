// Function: FUN_1404d0fc8
// Addr: 1404d0fc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0fc8(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RDI;
  undefined1 auStack_4d1e [19734];
  undefined4 uVar4;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar2 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  bVar3 = (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar3;
  *(char *)(param_2 + -0x7550ffc6) =
       *(char *)(param_2 + -0x7550ffc6) + (char)param_1 + CARRY1(bVar2,bVar3);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar3 = bVar3 + *(char *)CONCAT44(in_register_00000004,in_EAX);
  uVar4 = CONCAT31((int3)(in_EAX >> 8),bVar3);
  pbVar1 = (byte *)(unaff_RDI + param_1);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)param_2;
  *(char *)(param_2 + -0x7550ffc6) =
       *(char *)(param_2 + -0x7550ffc6) + (char)param_1 + CARRY1(bVar2,(byte)param_2);
  *(int *)(unaff_RDI + 0xd) = *(int *)(unaff_RDI + 0xd) + (int)auStack_4d1e;
  *(char *)(unaff_RDI + -0x1c) = *(char *)(unaff_RDI + -0x1c) + (char)((ulonglong)param_1 >> 8);
  *(byte *)CONCAT44(in_register_00000004,uVar4) =
       *(byte *)CONCAT44(in_register_00000004,uVar4) | bVar3;
  *(byte *)CONCAT44(in_register_00000004,uVar4) =
       *(char *)CONCAT44(in_register_00000004,uVar4) + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

