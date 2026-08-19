// Function: FUN_1404d0dfc
// Addr: 1404d0dfc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0dfc(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  uint in_EAX;
  undefined4 in_register_00000004;
  byte bVar6;
  undefined4 uVar5;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  cVar4 = (char)in_EAX + *(char *)CONCAT44(in_register_00000004,in_EAX);
  uVar5 = CONCAT31((int3)(in_EAX >> 8),cVar4);
  (&stack0x00000000)[param_2] = (&stack0x00000000)[param_2] + bVar6;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,uVar5) + -0x64ffbff1);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6;
  *(char *)CONCAT44(in_register_00000004,uVar5) =
       *(char *)CONCAT44(in_register_00000004,uVar5) + cVar4 + CARRY1(bVar3,bVar6);
  piVar2 = (int *)(CONCAT44(in_register_00000004,uVar5) + 0x21 +
                  CONCAT44(in_register_00000004,uVar5));
  *piVar2 = *piVar2 + -1;
  *(char *)CONCAT44(in_register_00000004,uVar5) =
       *(char *)CONCAT44(in_register_00000004,uVar5) + cVar4;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,uVar5) + -0x64ffbff1);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6;
  *(char *)CONCAT44(in_register_00000004,uVar5) =
       *(char *)CONCAT44(in_register_00000004,uVar5) + cVar4 + CARRY1(bVar3,bVar6);
  piVar2 = (int *)(CONCAT44(in_register_00000004,uVar5) + 1 + CONCAT44(in_register_00000004,uVar5));
  *piVar2 = *piVar2 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

