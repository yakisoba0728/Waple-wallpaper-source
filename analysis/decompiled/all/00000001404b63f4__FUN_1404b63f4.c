// Function: FUN_1404b63f4
// Addr: 1404b63f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b63f4(int param_1,int *param_2)

{
  undefined1 uVar1;
  char *in_RAX;
  undefined1 *unaff_RDI;
  
  in_RAX[(longlong)param_2] = in_RAX[(longlong)param_2] + (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX + (char)((ulonglong)in_RAX >> 8);
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  uVar1 = in((short)param_2);
  unaff_RDI[1] = uVar1;
  *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

