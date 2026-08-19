// Function: FUN_1404b9600
// Addr: 1404b9600
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9600(longlong param_1,byte *param_2)

{
  char in_AL;
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar4;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  char in_CF;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  cVar3 = -in_CF;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL));
  bVar1 = in_AL - 0x2cU |
          *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL - 0x2cU)));
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + cVar4;
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar1))) |
           100) =
       *(int *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar1)))
               | 100) + (CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar1)) | 100);
  param_2[CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar1))) | 100]
       = param_2[CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar1)))
                 | 100] | (byte)param_2;
  cVar2 = (bVar1 | 100) + 0x34;
  verr();
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar4;
  cVar3 = cVar3 + (byte)param_2;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) | (byte)param_1;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,cVar2))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,cVar2)))
       & CONCAT22(in_register_00000002,CONCAT11(cVar3,cVar2));
  cVar2 = cVar2 + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(cVar3,cVar2)));
  cVar3 = cVar3 * '\x02';
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,cVar2))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,cVar2)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar3,cVar2));
  *param_2 = *param_2 & unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

