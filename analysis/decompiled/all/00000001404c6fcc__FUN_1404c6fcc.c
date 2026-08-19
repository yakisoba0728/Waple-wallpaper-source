// Function: FUN_1404c6fcc
// Addr: 1404c6fcc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6fcc(char *param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  byte bVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BH;
  longlong unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar2 = in_AL + 0x74U |
          *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL + 0x74U)));
  cRam00000001ba4c7e11 = cRam00000001ba4c7e11 + bVar2;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       ^ bVar2;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       ^ bVar2;
  *(byte *)(unaff_RSI + 0x4c) = *(byte *)(unaff_RSI + 0x4c) >> 1;
  *param_1 = *param_1 + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       + bVar2;
  *(char *)(param_2 + 0x5f) = *(char *)(param_2 + 0x5f) + unaff_BH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       ^ bVar2;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       ^ bVar2;
  *(byte *)(unaff_RSI + 0x4c) = *(byte *)(unaff_RSI + 0x4c) >> 1;
  *param_1 = *param_1 + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       + bVar2;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) + 0x5f);
  *pcVar1 = *pcVar1 + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       ^ bVar2;
  if ((POPCOUNT(*(undefined1 *)
                 CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
               ) & 1U) != 0) {
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
         *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))
                          ) ^ bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out((short)param_2,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

