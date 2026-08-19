// Function: FUN_1404bb41c
// Addr: 1404bb41c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb41c(undefined8 param_1,char param_2)

{
  uint uVar1;
  undefined8 in_RAX;
  int *piVar2;
  int unaff_EBX;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  
  piVar2 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 'x');
  uVar1 = (int)piVar2 + *piVar2;
  piVar2 = (int *)(ulonglong)uVar1;
  piVar2[1] = piVar2[1] & unaff_EDI;
  *(char *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) + param_2;
  *(char *)piVar2 = (char)*piVar2 + (char)uVar1;
  *piVar2 = *piVar2 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

