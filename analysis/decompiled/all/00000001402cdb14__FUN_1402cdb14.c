// Function: FUN_1402cdb14
// Addr: 1402cdb14
// Size: 69 bytes


undefined8 FUN_1402cdb14(char *param_1,undefined8 *param_2)

{
  char cVar1;
  char *in_RAX;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0;
  lVar3 = lVar2;
  do {
    cVar1 = *param_1;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
    if ((cVar1 != (&DAT_14042e598)[lVar3]) && (cVar1 != (&DAT_14042e59c)[lVar3]))
    goto LAB_1402cdb55;
    lVar3 = lVar3 + 1;
    cVar1 = *(char *)*param_2;
    in_RAX = (char *)*param_2 + 1;
    *param_2 = in_RAX;
    *param_1 = cVar1;
  } while (lVar3 != 4);
  lVar2 = 1;
LAB_1402cdb55:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)lVar2);
}

