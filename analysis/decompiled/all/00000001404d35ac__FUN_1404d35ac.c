// Function: FUN_1404d35ac
// Addr: 1404d35ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d35ac(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar3;
  undefined6 uVar4;
  char cVar5;
  longlong unaff_RBP;
  byte *unaff_RSI;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  uVar4 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar3 = (char)param_1;
  *(char *)(unaff_RBP + -0x4a64ffc7) = cVar5;
  bVar2 = *unaff_RSI;
  *param_1 = *param_1 + in_AH;
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) ^
           0x4d) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
                ^ 0x4d) + (bVar2 ^ 0x4d);
  *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) ^
           0x4d) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
                ^ 0x4d) + cVar5;
  pcVar1 = (char *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) ^ 0x4d) -
                   0x6fffc64b);
  *pcVar1 = *pcVar1 + cVar3;
  *(byte *)CONCAT62(uVar4,CONCAT11(0x39,cVar3)) =
       *(char *)CONCAT62(uVar4,CONCAT11(0x39,cVar3)) + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

