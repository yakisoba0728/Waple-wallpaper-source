// Function: FUN_1404ce020
// Addr: 1404ce020
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce020(undefined8 param_1,undefined8 param_2)

{
  int in_EAX;
  uint uVar1;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int *unaff_RSI;
  char unaff_R12B;
  float10 in_ST0;
  char *pcVar2;
  
  uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar4 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar3 = (undefined1)param_2;
  uVar1 = in_EAX + 0x3600470;
  pcVar2 = (char *)(ulonglong)uVar1;
  pcVar2[-0x21] = pcVar2[-0x21] + (char)(uVar1 >> 8);
  pcVar2[0x65] = pcVar2[0x65] + unaff_R12B;
  *(short *)((longlong)pcVar2 * 2 + 2) = (short)in_ST0;
  *(uint *)CONCAT44(uVar5,CONCAT22(uVar4,CONCAT11(0x2b,uVar3))) =
       *(uint *)CONCAT44(uVar5,CONCAT22(uVar4,CONCAT11(0x2b,uVar3))) ^ uVar1;
  *pcVar2 = *pcVar2 + (char)uVar1;
  *pcVar2 = *pcVar2 + (char)uVar1;
  *unaff_RSI = *unaff_RSI + CONCAT22(uVar4,CONCAT11(0x2b,uVar3));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

