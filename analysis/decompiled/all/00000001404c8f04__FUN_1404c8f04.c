// Function: FUN_1404c8f04
// Addr: 1404c8f04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c8f5f) */

void FUN_1404c8f04(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar5;
  undefined1 uVar6;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar7;
  byte bVar8;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  longlong unaff_RDI;
  byte in_CF;
  undefined1 auStack_8 [8];
  byte bVar4;
  
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  bVar7 = (byte)param_2;
  pbVar2 = (byte *)(unaff_RSI + param_2);
  bVar3 = *pbVar2;
  bVar4 = *pbVar2;
  *pbVar2 = (bVar4 - bVar8) - in_CF;
  *(char *)(unaff_RDI + param_2) =
       *(char *)(unaff_RDI + param_2) + in_AH + (bVar3 < bVar8 || (byte)(bVar4 - bVar8) < in_CF);
  pbVar2 = (byte *)(unaff_RSI + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *pbVar2 = *pbVar2 | bVar7;
  uVar6 = 0x7d;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0x7d))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0x7d))) ^
       CONCAT22(in_register_00000002,CONCAT11(in_AH,0x7d));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0x7d))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0x7d))) +
       bVar7;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0x7d))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0x7d))) +
       '}';
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,0x7d))) + 0x1200317d);
  cVar5 = *pcVar1;
  *pcVar1 = *pcVar1 + bVar8;
  if (*pcVar1 == '\0' || SCARRY1(cVar5,bVar8) != *pcVar1 < '\0') {
    if (*pcVar1 != '\0' && SCARRY1(cVar5,bVar8) == *pcVar1 < '\0') {
      *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0x7d))) =
           *(uint *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,0x7d))) & (uint)auStack_8;
      *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0x7d))) =
           *(byte *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,0x7d))) | 0x7d;
    }
    else {
      uVar6 = 0xfa;
    }
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,uVar6))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,uVar6))
                          ) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0x7d))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0x7d))) +
       bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

