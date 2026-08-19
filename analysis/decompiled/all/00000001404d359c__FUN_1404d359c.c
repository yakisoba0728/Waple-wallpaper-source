// Function: FUN_1404d359c
// Addr: 1404d359c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d359c(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar3;
  undefined6 uVar4;
  byte bVar5;
  longlong unaff_RBP;
  byte *unaff_RSI;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  uVar4 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar3 = (char)param_1;
  *(byte *)(unaff_RBP + -0x4a64ffc7) = bVar5;
  bVar2 = *unaff_RSI;
  *param_1 = *param_1 + in_AH;
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) ^
           0x4d) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
                ^ 0x4d) + (bVar2 ^ 0x4d);
  pcVar1 = (char *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) ^ 0x4d) -
                   0x64ffc64b);
  *pcVar1 = *pcVar1 + cVar3;
  (unaff_RSI + 0x21004e)[(longlong)&stack0x00000000] =
       (unaff_RSI + 0x21004e)[(longlong)&stack0x00000000] + 0x39;
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) ^
           0x4d) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
                ^ 0x4d) + (bVar2 ^ 0x4d);
  *(byte *)(unaff_RBP + -0x4a77ffc7) = *(byte *)(unaff_RBP + -0x4a77ffc7) ^ bVar5;
  *(byte *)CONCAT62(uVar4,CONCAT11(0x39,cVar3)) =
       *(char *)CONCAT62(uVar4,CONCAT11(0x39,cVar3)) + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

