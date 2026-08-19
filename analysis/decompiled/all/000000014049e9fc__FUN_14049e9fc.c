// Function: FUN_14049e9fc
// Addr: 14049e9fc
// Size: 1 bytes


void FUN_14049e9fc(void)

{
  char cVar1;
  char in_AL;
  byte bVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar2 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  cVar1 = in_AH * '\x02';
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,bVar2))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,bVar2)))
       | bVar2;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,bVar2)))
       + bVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

