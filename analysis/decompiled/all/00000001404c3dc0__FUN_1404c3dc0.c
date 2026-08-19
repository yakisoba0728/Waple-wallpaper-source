// Function: FUN_1404c3dc0
// Addr: 1404c3dc0
// Size: 1 bytes


void FUN_1404c3dc0(int param_1,undefined8 param_2)

{
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  undefined1 uVar1;
  char cVar2;
  undefined6 uVar3;
  char unaff_SPL;
  undefined8 *unaff_RSI;
  char in_CF;
  undefined8 in_MM1;
  
  uVar3 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar1 = (undefined1)param_2;
  cVar2 = ((char)((ulonglong)param_2 >> 8) - in_AH) - in_CF;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | in_AL;
  pmulhuw(in_MM1,*unaff_RSI);
  *(char *)CONCAT62(uVar3,CONCAT11(cVar2,uVar1)) =
       *(char *)CONCAT62(uVar3,CONCAT11(cVar2,uVar1)) + (char)param_1;
  if (*(char *)CONCAT62(uVar3,CONCAT11(cVar2,uVar1)) != '\0') {
    cRam00000001304c4a05 = cRam00000001304c4a05 + in_AL;
    return;
  }
  cVar2 = in(CONCAT11(cVar2,uVar1));
  *(char *)(longlong)param_1 = *(char *)(longlong)param_1 + unaff_SPL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + cVar2;
  return;
}

