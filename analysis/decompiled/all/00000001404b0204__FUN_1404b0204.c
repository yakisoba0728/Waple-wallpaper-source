// Function: FUN_1404b0204
// Addr: 1404b0204
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0204(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong in_RAX;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  int *unaff_RDI;
  
  cVar1 = (char)((ulonglong)in_RAX >> 8);
  *(char *)(param_2 + unaff_RBP) = *(char *)(param_2 + unaff_RBP) + cVar1;
  *(char *)(param_1 + unaff_RBP) = *(char *)(param_1 + unaff_RBP) + (char)((ulonglong)param_2 >> 8);
  *(char *)(in_RAX + 0xd) = *(char *)(in_RAX + 0xd) + cVar1;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
  *unaff_RDI = *unaff_RDI + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

