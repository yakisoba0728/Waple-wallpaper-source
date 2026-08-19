// Function: FUN_1404c89fc
// Addr: 1404c89fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c89fc(longlong param_1,byte param_2)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & (uint)param_1;
  cVar2 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  param_2 = in_AH | param_2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(param_2,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(param_2,cVar2))
                        ) + '\x01';
  cVar2 = cRam080031548c003153;
  *(uint *)(CONCAT44(in_register_00000004,
                     CONCAT22(in_register_00000002,CONCAT11(param_2,cRam080031548c003153))) + 0x21 +
           CONCAT44(in_register_00000004,
                    CONCAT22(in_register_00000002,CONCAT11(param_2,cRam080031548c003153)))) =
       (uint)param_1;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(param_2,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(param_2,cVar2))
                        ) + cVar2;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(param_2,cVar2))) + -0x73ffcead);
  *pcVar1 = *pcVar1 + param_2;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(param_2,cVar2))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(param_2,cVar2))
                        ) ^ CONCAT22(in_register_00000002,CONCAT11(param_2,cVar2));
  *(byte *)(param_1 + 0xc21004c) = *(byte *)(param_1 + 0xc21004c) | (byte)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

