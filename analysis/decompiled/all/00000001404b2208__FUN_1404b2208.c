// Function: FUN_1404b2208
// Addr: 1404b2208
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2208(longlong param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char in_AL;
  char cVar6;
  byte bVar7;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char *unaff_RSI;
  longlong in_FS_OFFSET;
  
  cVar6 = in_AL + '!';
  *param_4 = *param_4 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + cVar6;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6)))
       + cVar6;
  bVar7 = in(0x15);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7)))
       + bVar7;
  if (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7)))
      != '\0') {
    bVar2 = *(byte *)CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7)));
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7))
                          ) + bVar7;
    piVar1 = (int *)(in_FS_OFFSET +
                    CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7))));
    uVar4 = (uint)CARRY1(bVar2,bVar7);
    iVar3 = *piVar1;
    iVar5 = *piVar1 - CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7));
    *piVar1 = iVar5 - uVar4;
    if (*piVar1 == 0 ||
        (SBORROW4(iVar3,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7))) !=
        SBORROW4(iVar5,uVar4)) != *piVar1 < 0) goto code_r0x0001404b2235;
    cRam00000001444b38a3 = cRam00000001444b38a3 + (char)((ulonglong)param_1 >> 8);
    *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) &
         (uint)param_1;
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7))) =
         *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7))
                          ) & CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7));
    bVar2 = *(byte *)CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7)));
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7))
                          ) + bVar7;
    unaff_RSI[0x16] = unaff_RSI[0x16] + unaff_BH + CARRY1(bVar2,bVar7);
  }
  cVar6 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + in_AH;
  if (*unaff_RSI == '\0' || SCARRY1(cVar6,in_AH) != *unaff_RSI < '\0') {
    *param_2 = *param_2 >> 1 | *param_2 << 7;
    *(undefined1 *)
     CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7))) =
         *(undefined1 *)
          CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar7)));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x0001404b2235:
  *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) &
       (byte)param_1;
  piVar1 = (int *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                  param_1);
  *piVar1 = *piVar1 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  unaff_RSI[CONCAT71(unaff_00000021,unaff_SPL)] =
       unaff_RSI[CONCAT71(unaff_00000021,unaff_SPL)] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

