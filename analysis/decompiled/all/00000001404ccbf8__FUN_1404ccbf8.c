// Function: FUN_1404ccbf8
// Addr: 1404ccbf8
// Size: 1 bytes


uint FUN_1404ccbf8(char *param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_R12B;
  
  uVar3 = in_EAX ^ 0x352f3a00;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (longlong)param_1 * 8);
  cVar2 = (char)in_EAX;
  *pcVar1 = *pcVar1 + cVar2;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + cVar2;
  cVar2 = cVar2 + unaff_BH;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar2) ^ 0x352f3a00;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (longlong)param_1 * 8);
  *pcVar1 = *pcVar1 + cVar2;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + cVar2;
  return CONCAT31((int3)(uVar3 >> 8),cVar2 + param_2 + (char)((ulonglong)param_1 >> 8)) ^ 0x352ef800
  ;
}

