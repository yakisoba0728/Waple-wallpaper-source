// Function: FUN_1404c82d0
// Addr: 1404c82d0
// Size: 1 bytes


void FUN_1404c82d0(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  int in_EAX;
  uint uVar2;
  uint *puVar3;
  char *pcVar4;
  longlong lVar5;
  undefined1 uVar6;
  char cVar7;
  undefined6 uVar8;
  char cVar9;
  byte bVar10;
  longlong unaff_RSI;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  cVar9 = (char)param_2;
  uVar8 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar7 = (char)((ulonglong)param_1 >> 8);
  uVar6 = SUB81(param_1,0);
  uVar2 = in_EAX + 0xf20009f4;
  *param_1 = *param_1 | bVar10;
  *(char *)(unaff_RSI + 9) = *(char *)(unaff_RSI + 9) + cVar9;
  *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 ^ uVar2;
  puVar3 = (uint *)func_0x0001614ccf62();
  *(char *)puVar3 = (char)*puVar3 + (char)puVar3;
  cVar9 = cVar9 + bVar10;
  *(byte *)CONCAT62(uVar8,CONCAT11(cVar7,uVar6)) =
       *(byte *)CONCAT62(uVar8,CONCAT11(cVar7,uVar6)) | bVar10;
  *(char *)(unaff_RSI + 9) = *(char *)(unaff_RSI + 9) + cVar9;
  *puVar3 = *puVar3 ^ (uint)puVar3;
  pcVar4 = (char *)func_0x0001614ccf72();
  *pcVar4 = *pcVar4 + (char)pcVar4;
  pcVar1 = (char *)(CONCAT62(uVar8,CONCAT11(cVar7,uVar6)) + -0xdffcef8);
  *pcVar1 = *pcVar1 + cVar7;
  *(byte *)CONCAT62(uVar8,CONCAT11(cVar7,uVar6)) =
       *(byte *)CONCAT62(uVar8,CONCAT11(cVar7,uVar6)) | bVar10;
  lVar5 = CONCAT71((int7)((ulonglong)pcVar4 >> 8),(char)pcVar4 + cVar9);
  puVar3 = (uint *)(lVar5 * 2 + 0x21);
  *puVar3 = *puVar3 | 0x30000000;
  *(byte *)CONCAT62(uVar8,CONCAT11(cVar7,uVar6)) =
       *(byte *)CONCAT62(uVar8,CONCAT11(cVar7,uVar6)) | bVar10;
  pcVar1 = (char *)(CONCAT62(uVar8,CONCAT11(cVar7,uVar6)) + -0x3fffcef8);
  *pcVar1 = *pcVar1 + cVar7;
  puVar3 = (uint *)(lVar5 * 2 + 0x21);
  *puVar3 = *puVar3 | 0x800;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

