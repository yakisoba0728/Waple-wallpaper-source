// Function: FUN_1404b57c8
// Addr: 1404b57c8
// Size: 1 bytes


void FUN_1404b57c8(char *param_1,char *param_2)

{
  byte *pbVar1;
  byte in_AL;
  byte bVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  *param_1 = *param_1;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x57);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AL;
  bVar2 = (in_AL - *(char *)CONCAT44(in_register_00000004,
                                     CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))) -
          CARRY1(bVar2,in_AL);
  *param_1 = *param_1;
  *param_2 = *param_2 + bVar2;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       + bVar2;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       | bVar2;
  in((short)param_2);
  *param_1 = *param_1 + 'J';
  *(char *)(CONCAT44(in_register_00000004,
                     CONCAT22(in_register_00000002,CONCAT11(in_AH,bRam00000001468d61fb))) | 0x4a) =
       *(char *)(CONCAT44(in_register_00000004,
                          CONCAT22(in_register_00000002,CONCAT11(in_AH,bRam00000001468d61fb))) |
                0x4a) << 1 |
       *(char *)(CONCAT44(in_register_00000004,
                          CONCAT22(in_register_00000002,CONCAT11(in_AH,bRam00000001468d61fb))) |
                0x4a) < '\0';
  *(byte *)(CONCAT44(in_register_00000004,
                     CONCAT22(in_register_00000002,CONCAT11(in_AH,bRam00000001468d61fb))) | 0x4a) =
       *(byte *)(CONCAT44(in_register_00000004,
                          CONCAT22(in_register_00000002,CONCAT11(in_AH,bRam00000001468d61fb))) |
                0x4a) ^ (bRam00000001468d61fb | 0x4a);
  *param_1 = *param_1 + in_AH;
  *(char *)(CONCAT44(in_register_00000004,
                     CONCAT22(in_register_00000002,CONCAT11(in_AH,bRam00000001468d61fb))) | 0x4a) =
       *(char *)(CONCAT44(in_register_00000004,
                          CONCAT22(in_register_00000002,CONCAT11(in_AH,bRam00000001468d61fb))) |
                0x4a) - (char)param_1;
  *(char *)(CONCAT44(in_register_00000004,
                     CONCAT22(in_register_00000002,CONCAT11(in_AH,bRam00000001468d61fb))) | 0x4a) =
       *(char *)(CONCAT44(in_register_00000004,
                          CONCAT22(in_register_00000002,CONCAT11(in_AH,bRam00000001468d61fb))) |
                0x4a) + (char)((ulonglong)param_1 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

