// Function: FUN_1404a8e8c
// Addr: 1404a8e8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8e8c(byte *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  byte bVar3;
  byte in_AL;
  char in_AH;
  byte bVar4;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | in_AL;
  bVar4 = in_AH + (char)((ulonglong)param_2 >> 8);
  bVar3 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(bVar4,in_AL)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,in_AL)))
       + in_AL;
  if (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,in_AL)))
      != '\0') {
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,in_AL))
                          ) + in_AL;
    puVar1 = (undefined1 *)
             ((CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,in_AL))) ^
              0xc1) - 0x37fff3e8);
    *puVar1 = *puVar1;
    pcVar2 = (char *)((CONCAT44(in_register_00000004,
                                CONCAT22(in_register_00000002,CONCAT11(bVar4,in_AL))) ^ 0xc1) +
                     (CONCAT44(in_register_00000004,
                               CONCAT22(in_register_00000002,CONCAT11(bVar4,in_AL))) ^ 0xc1));
    *pcVar2 = *pcVar2 - (char)param_1;
    uRam00000001044f8eb8 =
         uRam00000001044f8eb8 & (CONCAT22(in_register_00000002,CONCAT11(bVar4,in_AL)) ^ 0xc1);
    *param_1 = *param_1 ^ bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(bVar4,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(bVar4,in_AL))));
  *pcVar2 = (*pcVar2 - (char)param_1) - CARRY1(bVar3,in_AL);
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(bVar4,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,in_AL)))
       + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

