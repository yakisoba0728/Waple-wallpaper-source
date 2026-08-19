// Function: FUN_1404b46e0
// Addr: 1404b46e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b46e0(undefined8 param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  char *pcVar2;
  byte in_AL;
  byte in_AH;
  byte bVar3;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar4;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  byte *unaff_RDI;
  bool in_SF;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  *(char *)(param_3 +
           CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))) =
       (char)param_1;
  if (!in_SF) {
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = in_AH & in_AL;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL));
  bVar1 = *param_2;
  *param_2 = *param_2 - bVar4;
  pcVar2 = (char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *pcVar2 = *pcVar2 + bVar3 + (bVar1 < bVar4);
  *unaff_RDI = *unaff_RDI | bVar4;
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_1 >> 8);
  unaff_RSI[-0x7ffe672] = unaff_RSI[-0x7ffe672] + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

