// Function: FUN_14049f980
// Addr: 14049f980
// Size: 1 bytes


char FUN_14049f980(uint param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  byte bVar2;
  undefined1 in_AL;
  char cVar3;
  byte in_AH;
  byte bVar4;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & param_1;
  bVar2 = bRam980001c2c80001c0;
  bVar4 = in_AH | (byte)param_2;
  *param_4 = *param_4;
  *param_2 = *param_2 | bVar2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,bVar2)))
       + (char)param_1;
  uVar1 = *(uint *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(bVar4,bVar2)));
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,bVar2))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,bVar2))) +
       CONCAT22(in_register_00000002,CONCAT11(bVar4,bVar2));
  cVar3 = bVar2 + (char)(param_1 >> 8) +
          CARRY4(uVar1,CONCAT22(in_register_00000002,CONCAT11(bVar4,bVar2)));
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,cVar3))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,cVar3))) +
       CONCAT22(in_register_00000002,CONCAT11(bVar4,cVar3));
  *param_4 = *param_4 + -8;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,0xf8))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,0xf8))) +
       -8;
  return (char)param_1 + -8;
}

