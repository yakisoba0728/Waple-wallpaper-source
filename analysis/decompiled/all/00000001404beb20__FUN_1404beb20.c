// Function: FUN_1404beb20
// Addr: 1404beb20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404beb20(int *param_1)

{
  int unaff_ESP;
  byte *unaff_RDI;
  
  TaskRegister((short)*param_1);
  *param_1 = *param_1 + unaff_ESP;
  cRam000000014a2bf71d = cRam000000014a2bf71d + (char)param_1;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

