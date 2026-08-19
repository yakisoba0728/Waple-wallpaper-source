// Function: FUN_1404d3588
// Addr: 1404d3588
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3588(char *param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  byte in_AL;
  char cVar3;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar4;
  undefined6 uVar5;
  byte bVar6;
  longlong unaff_RBP;
  byte *unaff_RSI;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  *(byte *)(unaff_RBP + -0x4a77ffc7) = *(byte *)(unaff_RBP + -0x4a77ffc7) ^ bVar6;
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 | in_AL ^ 0x4d;
  *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^
           0x4d) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
                ^ 0x4d) + (char)param_1;
  cVar3 = in(0x48);
  cVar4 = (char)param_1 +
          *(char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) + -0x64ffc64b);
  (&stack0x0021004d)[(longlong)unaff_RSI] = (&stack0x0021004d)[(longlong)unaff_RSI] + '9';
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)))
       + cVar3;
  *(byte *)(unaff_RBP + -0x4a64ffc7) = bVar6;
  bVar2 = *unaff_RSI;
  *(char *)CONCAT62(uVar5,CONCAT11(0x39,cVar4)) =
       *(char *)CONCAT62(uVar5,CONCAT11(0x39,cVar4)) + in_AH;
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) ^
           0x4d) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
                ^ 0x4d) + (bVar2 ^ 0x4d);
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) ^
           0x4d) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
                ^ 0x4d) + bVar6;
  pcVar1 = (char *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) ^ 0x4d) -
                   0x6fffc64b);
  *pcVar1 = *pcVar1 + cVar4;
  *(byte *)CONCAT62(uVar5,CONCAT11(0x39,cVar4)) =
       *(char *)CONCAT62(uVar5,CONCAT11(0x39,cVar4)) + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

