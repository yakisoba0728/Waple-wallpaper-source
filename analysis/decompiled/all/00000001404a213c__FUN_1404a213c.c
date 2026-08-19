// Function: FUN_1404a213c
// Addr: 1404a213c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a213c(char *param_1,undefined8 param_2)

{
  byte in_AL;
  undefined1 in_AH;
  byte bVar1;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_SPL;
  char in_AF;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar1 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  bVar1 = (*(char *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) < '\0') << 7 |
          (*(char *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) == '\0') << 6 |
          in_AF << 4 |
          ((POPCOUNT(*(undefined1 *)
                      CONCAT44(in_register_00000004,
                               CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))) & 1U) == 0) <<
          2 | 2U | CARRY1(bVar1,in_AL);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL)))
       & bVar1;
  *param_1 = *param_1 + unaff_SPL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL)))
       + in_AL;
  cRam00000000bbf5ffbf = cRam00000000bbf5ffbf + '\x04';
  bVar1 = ((char)in_AL < '\0') << 7 | (in_AL == 0) << 6 | in_AF << 4 |
          ((POPCOUNT(in_AL) & 1U) == 0) << 2;
  *param_1 = *param_1 + unaff_SPL;
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL))) |
           0x200) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL)))
                | 0x200) + in_AL;
  *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL))) |
           0x200) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL)))
                | 0x200) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

