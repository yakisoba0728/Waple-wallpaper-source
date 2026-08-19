// Function: FUN_1404bc500
// Addr: 1404bc500
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404bc4ce) */
/* WARNING: Removing unreachable block (ram,0x0001404bc4d2) */
/* WARNING: Removing unreachable block (ram,0x0001404bc47e) */
/* WARNING: Removing unreachable block (ram,0x0001404bc4be) */
/* WARNING: Removing unreachable block (ram,0x0001404bc4c2) */
/* WARNING: Removing unreachable block (ram,0x0001404bc46e) */

void FUN_1404bc500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  byte *in_RAX;
  char *pcVar2;
  char cVar3;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  in_RAX[0x2c] = in_RAX[0x2c] | (byte)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX + cVar3;
  bVar1 = (byte)in_RAX & *in_RAX;
  bVar1 = bVar1 & *(byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  pcVar2 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((byte)((ulonglong)in_RAX >> 8) | bVar1,bVar1));
  *param_4 = *param_4;
  *pcVar2 = *pcVar2 + bVar1;
  *pcVar2 = *pcVar2 + cVar3;
  *param_4 = *param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

