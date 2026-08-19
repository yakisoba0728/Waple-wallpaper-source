// Function: FUN_1404c9c70
// Addr: 1404c9c70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c9c39) */
/* WARNING: Removing unreachable block (ram,0x0001404c9c11) */

void FUN_1404c9c70(char *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  char cVar3;
  undefined8 in_RAX;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  char unaff_R12B;
  char *pcVar2;
  
  bVar1 = (byte)in_RAX ^ *param_3;
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  *param_1 = *param_1 + unaff_R12B;
  *(char *)((longlong)pcVar2 * 2) = *(char *)((longlong)pcVar2 * 2) + bVar1;
  param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] +
       ((char)((ulonglong)in_RAX >> 0x18) >> 7);
  cVar3 = (char)((ulonglong)in_RAX >> 8);
  (&stack0x00000000)[(longlong)param_1] = (&stack0x00000000)[(longlong)param_1] + cVar3;
  param_1[0x32] = param_1[0x32] & (byte)param_1;
  param_1[0x70003249] = param_1[0x70003249] + unaff_BL;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar2 = *pcVar2 + bVar1;
  *pcVar2 = *pcVar2 + cVar3;
  *param_1 = *param_1 + unaff_R12B;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

