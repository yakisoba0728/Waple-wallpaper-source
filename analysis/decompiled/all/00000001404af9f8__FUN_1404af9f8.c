// Function: FUN_1404af9f8
// Addr: 1404af9f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af9f8(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  uint *unaff_RDI;
  
  pcVar1 = (char *)func_0x0001614b44f5();
  *pcVar1 = *pcVar1 + (char)pcVar1;
  out(param_2,CONCAT31((int3)((ulonglong)pcVar1 >> 8),(char)pcVar1 + ((uint)pcVar1 < *unaff_RDI)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

