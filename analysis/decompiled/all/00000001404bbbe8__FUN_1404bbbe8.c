// Function: FUN_1404bbbe8
// Addr: 1404bbbe8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbbe8(longlong param_1,char param_2)

{
  char *in_RAX;
  int unaff_EBX;
  bool bVar1;
  
  *(int *)(in_RAX + param_1) = *(int *)(in_RAX + param_1) + unaff_EBX;
  in_RAX[param_1] = in_RAX[param_1] + (char)unaff_EBX;
  bVar1 = SCARRY1(cRam000000014a2bc7e5,(char)param_1);
  cRam000000014a2bc7e5 = cRam000000014a2bc7e5 + (char)param_1;
  if (!bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

