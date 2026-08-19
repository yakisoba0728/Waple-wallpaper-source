// Function: FUN_1404a0c48
// Addr: 1404a0c48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0c48(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  uint *unaff_RBX;
  int *unaff_RDI;
  
  LOCK();
  uVar1 = *unaff_RBX;
  *unaff_RBX = CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  UNLOCK();
  *(char *)unaff_RBX = (char)*unaff_RBX + (char)(uVar1 >> 8);
  *(char *)unaff_RBX = (char)uVar1;
  *(char *)CONCAT44(in_register_00000004,uVar1) =
       *(char *)CONCAT44(in_register_00000004,uVar1) + (char)param_1;
  uVar3 = *param_2;
  *(uint *)CONCAT44(in_register_00000004,uVar1) =
       *(uint *)CONCAT44(in_register_00000004,uVar1) & uVar1;
  *(char *)CONCAT44(in_register_00000004,uVar1) =
       *(char *)CONCAT44(in_register_00000004,uVar1) + (char)uVar1;
  LOCK();
  uVar2 = *unaff_RBX;
  *unaff_RBX = uVar1;
  UNLOCK();
  *(char *)unaff_RBX = (char)*unaff_RBX + (char)(uVar2 >> 8);
  *(char *)unaff_RBX = (char)uVar2;
  *(char *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) + (char)(param_1 | uVar3);
  *unaff_RDI = *unaff_RDI + (param_1 | uVar3 | *param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

