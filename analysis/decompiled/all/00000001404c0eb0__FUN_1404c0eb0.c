// Function: FUN_1404c0eb0
// Addr: 1404c0eb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0eb0(longlong param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  byte unaff_BH;
  int *unaff_RDI;
  int iVar3;
  
  *(byte *)(param_1 + -0x46d4ffd8) = *(byte *)(param_1 + -0x46d4ffd8) & unaff_BH;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) - (char)in_EAX;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  cVar2 = (char)in_EAX + *(char *)CONCAT44(in_register_00000004,in_EAX);
  iVar3 = CONCAT31((int3)(in_EAX >> 8),cVar2);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,iVar3) + param_1);
  *pcVar1 = *pcVar1 + param_2;
  *(byte *)(param_1 + -0x46d4ffd8) = *(byte *)(param_1 + -0x46d4ffd8) & unaff_BH;
  *(char *)CONCAT44(in_register_00000004,iVar3) =
       *(char *)CONCAT44(in_register_00000004,iVar3) - cVar2;
  *unaff_RDI = *unaff_RDI + iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

