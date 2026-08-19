// Function: FUN_14049e530
// Addr: 14049e530
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e530(undefined8 param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int in_EAX;
  longlong unaff_RSI;
  
  *param_2 = *param_2 + (int)param_2;
  if (!SCARRY4(in_EAX,0xe821200)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = (char)(in_EAX + 0xe821200) + 'p';
  uVar2 = CONCAT31((int3)((uint)(in_EAX + 0xe821200) >> 8),cVar3);
  puVar1 = (uint *)((longlong)param_2 + (ulonglong)uVar2);
  *puVar1 = *puVar1 & uVar2;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

