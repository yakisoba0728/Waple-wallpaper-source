// Function: FUN_1404d2050
// Addr: 1404d2050
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d207a) */
/* WARNING: Removing unreachable block (ram,0x0001404d20bf) */

void FUN_1404d2050(byte *param_1,char *param_2,longlong param_3)

{
  char *pcVar1;
  char cVar2;
  char in_AL;
  byte bVar3;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar4;
  undefined7 uVar5;
  char cVar6;
  undefined6 uVar7;
  byte *unaff_RSI;
  byte in_R10B;
  char unaff_R15B;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar6 = (char)param_2;
  param_2[0x3a] = param_2[0x3a] + in_AL;
  param_2[CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) * 2] =
       param_2[CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) *
               2] + in_AH;
  bVar3 = in_AL - 0x13;
  bVar4 = *param_1;
  *param_1 = *param_1 + in_R10B;
  uVar5 = (undefined7)((ulonglong)param_1 >> 8);
  bVar4 = (char)param_1 +
          *(char *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) +
          CARRY1(bVar4,in_R10B);
  *param_2 = *param_2 + cVar6;
  bVar3 = bVar3 | *(byte *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)));
  cVar2 = (char)((ulonglong)param_2 >> 8) + *(char *)(CONCAT71(uVar5,bVar4) * 2);
  *(char *)CONCAT62(uVar7,CONCAT11(cVar2,cVar6)) =
       *(char *)CONCAT62(uVar7,CONCAT11(cVar2,cVar6)) + cVar6;
  bVar4 = bVar4 ^ *unaff_RSI;
  if (CONCAT71(uVar5,bVar4) == 1 || bVar4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  *(char *)(param_3 + 0x2004d1f) = *(char *)(param_3 + 0x2004d1f) + unaff_R15B;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) + 0x2048d02);
  *pcVar1 = *pcVar1 + bVar3;
  uRam0000000174522094 = uRam0000000174522094 & CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

