// Function: FUN_1404a1ccc
// Addr: 1404a1ccc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1ccc(char param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte in_AH;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  int *unaff_RSI;
  byte in_CF;
  
  uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar4 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar2 = (undefined1)param_2;
  pbVar1 = (byte *)(unaff_RBP + CONCAT71(unaff_00000019,unaff_BL));
  cVar3 = ((char)((ulonglong)param_2 >> 8) - (&stack0x00000000)[CONCAT71(unaff_00000019,unaff_BL)])
          - (in_AH < *pbVar1 || (byte)(in_AH - *pbVar1) < in_CF);
  *(char *)CONCAT44(uVar5,CONCAT22(uVar4,CONCAT11(cVar3,uVar2))) =
       *(char *)CONCAT44(uVar5,CONCAT22(uVar4,CONCAT11(cVar3,uVar2))) + unaff_BL;
  *unaff_RSI = *unaff_RSI + CONCAT22(uVar4,CONCAT11(cVar3,uVar2));
  *(char *)unaff_RSI = (char)*unaff_RSI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

