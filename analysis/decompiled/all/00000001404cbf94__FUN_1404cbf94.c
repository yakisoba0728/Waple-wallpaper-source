// Function: FUN_1404cbf94
// Addr: 1404cbf94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbf94(undefined8 param_1,undefined8 param_2)

{
  longlong in_RAX;
  char cVar1;
  longlong unaff_RBX;
  
  cVar1 = (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RBX + in_RAX) = *(char *)(unaff_RBX + in_RAX) + cVar1;
  *(char *)(in_RAX + -0x2affcb7e) = *(char *)(in_RAX + -0x2affcb7e) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

