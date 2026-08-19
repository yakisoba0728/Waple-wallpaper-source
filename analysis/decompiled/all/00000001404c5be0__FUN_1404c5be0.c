// Function: FUN_1404c5be0
// Addr: 1404c5be0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5be0(longlong param_1,char *param_2)

{
  int *piVar1;
  byte bVar2;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  uint uVar3;
  
  bVar2 = (byte)in_EAX & (byte)param_2;
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),bVar2);
  *(char *)CONCAT44(in_register_00000004,uVar3) =
       *(char *)CONCAT44(in_register_00000004,uVar3) + unaff_BL;
  *(byte *)CONCAT44(in_register_00000004,uVar3) =
       *(char *)CONCAT44(in_register_00000004,uVar3) + bVar2;
  piVar1 = (int *)(param_1 + CONCAT44(in_register_00000004,uVar3));
  *piVar1 = *piVar1 + uVar3;
  *param_2 = *param_2 + bVar2;
  *(byte *)CONCAT44(in_register_00000004,uVar3) =
       *(char *)CONCAT44(in_register_00000004,uVar3) + bVar2;
  uRam00000001a4515bf8 = uRam00000001a4515bf8 & uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

