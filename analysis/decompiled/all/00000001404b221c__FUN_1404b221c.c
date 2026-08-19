// Function: FUN_1404b221c
// Addr: 1404b221c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b221c(longlong param_1,byte *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  byte in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  char *unaff_RSI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
    cRam00000001444b38a3 = cRam00000001444b38a3 + (char)((ulonglong)param_1 >> 8);
    *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) &
         (uint)param_1;
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
    bVar2 = *(byte *)CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
    unaff_RSI[0x16] = unaff_RSI[0x16] + unaff_BH + CARRY1(bVar2,in_AL);
    cVar3 = *unaff_RSI;
    *unaff_RSI = *unaff_RSI + in_AH;
    if (*unaff_RSI == '\0' || SCARRY1(cVar3,in_AH) != *unaff_RSI < '\0') {
      *param_2 = *param_2 >> 1 | *param_2 << 7;
      *(undefined1 *)
       CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
           *(undefined1 *)
            CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) &
       (byte)param_1;
  piVar1 = (int *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                  param_1);
  *piVar1 = *piVar1 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  unaff_RSI[(longlong)&stack0x00000000] = unaff_RSI[(longlong)&stack0x00000000] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

