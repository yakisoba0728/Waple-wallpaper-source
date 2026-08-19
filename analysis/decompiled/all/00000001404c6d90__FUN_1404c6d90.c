// Function: FUN_1404c6d90
// Addr: 1404c6d90
// Size: 1 bytes


void FUN_1404c6d90(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  byte in_AL;
  char cVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar3;
  undefined7 uVar4;
  
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  uRam00000001a4516d98 = uRam00000001a4516d98 & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
  ;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | in_AL;
  bVar3 = (byte)param_1 & (byte)((ulonglong)param_2 >> 8);
  *(char *)(param_2 + -0x6fffd10f) = *(char *)(param_2 + -0x6fffd10f) + in_AL;
  cVar2 = in(0x4a);
  *(char *)CONCAT71(uVar4,bVar3) = *(char *)CONCAT71(uVar4,bVar3) + in_AH;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + in_AH;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}

