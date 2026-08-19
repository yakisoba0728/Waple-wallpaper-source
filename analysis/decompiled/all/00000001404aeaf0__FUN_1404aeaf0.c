// Function: FUN_1404aeaf0
// Addr: 1404aeaf0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aeaf0(longlong param_1,uint param_2)

{
  char cVar1;
  longlong in_RAX;
  char cVar2;
  undefined1 *unaff_RSI;
  uint *unaff_RDI;
  
  cVar2 = (char)(param_2 >> 8);
  *(char *)(in_RAX + param_1) = *(char *)(in_RAX + param_1) + cVar2;
  cVar1 = (char)((ulonglong)in_RAX >> 8);
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + cVar1;
  unaff_RSI[param_1] = unaff_RSI[param_1] + cVar2;
  *(char *)(in_RAX + -0x31ffec92) = *(char *)(in_RAX + -0x31ffec92) + cVar1;
  out(*unaff_RSI,(short)param_2);
  *unaff_RDI = *unaff_RDI & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

