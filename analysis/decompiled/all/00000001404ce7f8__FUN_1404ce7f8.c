// Function: FUN_1404ce7f8
// Addr: 1404ce7f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce7f8(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  byte in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar4;
  char *unaff_RBX;
  int unaff_ESP;
  char *unaff_RSI;
  
  cVar4 = (char)param_2;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  cVar2 = *(char *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  if (!SCARRY1(cVar2,in_AL)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 + in_AL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  bVar3 = in_AL ^ 4;
  *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 4)
       = *(char *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 4) + cVar4;
  cRam000000017e1d0893 = cRam000000017e1d0893 >> 1;
  pcVar1 = (char *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 4) +
                   0x210049e1);
  *pcVar1 = *pcVar1 + bVar3;
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 4)
       = *(char *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 4) + bVar3;
  *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 4)
       = *(char *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 4) + cVar4;
  cRam000000017e1d08a3 = cRam000000017e1d08a3 >> 1;
  pcVar1 = (char *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 4) +
                   0x190049e1);
  *pcVar1 = *pcVar1 + bVar3;
  *unaff_RSI = *unaff_RSI + cVar4;
  *(int *)((CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 4)
          & 0xffffffffffffff07) =
       *(int *)((CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
                ^ 4) & 0xffffffffffffff07) + unaff_ESP;
  *unaff_RBX = *unaff_RBX + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

