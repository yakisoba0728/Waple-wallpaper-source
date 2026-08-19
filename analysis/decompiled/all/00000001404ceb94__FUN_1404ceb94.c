// Function: FUN_1404ceb94
// Addr: 1404ceb94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ceb94(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  int in_EAX;
  char cVar4;
  undefined2 *unaff_RBX;
  char in_CF;
  undefined2 in_FPUControlWord;
  char cVar3;
  
  cVar4 = (char)param_2;
  pcVar1 = (char *)(param_2 + 0xc);
  cVar2 = *pcVar1;
  cVar3 = *pcVar1;
  *pcVar1 = cVar3 + cVar4 + in_CF;
  if (SCARRY1(cVar2,cVar4) == SCARRY1(cVar3 + cVar4,in_CF)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RBX = in_FPUControlWord;
  *(char *)(ulonglong)(in_EAX + 0xa34) = *(char *)(ulonglong)(in_EAX + 0xa34) + cVar4;
  *unaff_RBX = in_FPUControlWord;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

