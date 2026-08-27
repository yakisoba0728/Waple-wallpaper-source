// Function: FUN_140082890
// Addr: 140082890
// Size: 433 bytes


void FUN_140082890(char *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  BOOL BVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 *puVar10;
  DWORD local_res8 [2];
  int local_408 [256];
  
  if (*param_1 != '\0') {
    while( true ) {
      iVar6 = FUN_140290d80(param_1 + 0x80);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(5);
      }
      if (*(int *)(param_1 + 0xcc) == 0x7fffffff) {
        param_1[0xcc] = -2;
        param_1[0xcd] = -1;
        param_1[0xce] = -1;
        param_1[0xcf] = '\x7f';
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      lVar1 = *(longlong *)(param_1 + 0xf0);
      while (lVar1 == 0) {
        FUN_140290f10(param_1 + 0xf8,param_1 + 0x80);
        lVar1 = *(longlong *)(param_1 + 0xf0);
      }
      uVar2 = *(ulonglong *)(param_1 + 0xe8);
      lVar9 = 8;
      piVar8 = local_408;
      puVar10 = *(undefined8 **)
                 (*(longlong *)(param_1 + 0xd8) + (*(longlong *)(param_1 + 0xe0) - 1U & uVar2) * 8);
      do {
        uVar5 = puVar10[1];
        *(undefined8 *)piVar8 = *puVar10;
        *(undefined8 *)(piVar8 + 2) = uVar5;
        uVar5 = puVar10[3];
        *(undefined8 *)(piVar8 + 4) = puVar10[2];
        *(undefined8 *)(piVar8 + 6) = uVar5;
        uVar5 = puVar10[5];
        *(undefined8 *)(piVar8 + 8) = puVar10[4];
        *(undefined8 *)(piVar8 + 10) = uVar5;
        uVar5 = puVar10[7];
        *(undefined8 *)(piVar8 + 0xc) = puVar10[6];
        *(undefined8 *)(piVar8 + 0xe) = uVar5;
        uVar5 = puVar10[9];
        *(undefined8 *)(piVar8 + 0x10) = puVar10[8];
        *(undefined8 *)(piVar8 + 0x12) = uVar5;
        uVar5 = puVar10[0xb];
        *(undefined8 *)(piVar8 + 0x14) = puVar10[10];
        *(undefined8 *)(piVar8 + 0x16) = uVar5;
        iVar6 = *(int *)((longlong)puVar10 + 100);
        iVar3 = *(int *)(puVar10 + 0xd);
        iVar4 = *(int *)((longlong)puVar10 + 0x6c);
        piVar8[0x18] = *(int *)(puVar10 + 0xc);
        piVar8[0x19] = iVar6;
        piVar8[0x1a] = iVar3;
        piVar8[0x1b] = iVar4;
        iVar6 = *(int *)((longlong)puVar10 + 0x74);
        iVar3 = *(int *)(puVar10 + 0xf);
        iVar4 = *(int *)((longlong)puVar10 + 0x7c);
        piVar8[0x1c] = *(int *)(puVar10 + 0xe);
        piVar8[0x1d] = iVar6;
        piVar8[0x1e] = iVar3;
        piVar8[0x1f] = iVar4;
        lVar9 = lVar9 + -1;
        piVar8 = piVar8 + 0x20;
        puVar10 = puVar10 + 0x10;
      } while (lVar9 != 0);
      *(longlong *)(param_1 + 0xf0) = lVar1 + -1;
      lVar9 = 0;
      if (lVar1 + -1 != 0) {
        lVar9 = uVar2 + 1;
      }
      *(longlong *)(param_1 + 0xe8) = lVar9;
      FUN_140290ea0(param_1 + 0x80);
      if (local_408[0] == 0) break;
      local_res8[0] = 0;
      BVar7 = WriteFile(*(HANDLE *)(param_1 + 0x10),local_408,0x400,local_res8,(LPOVERLAPPED)0x0);
      if (BVar7 == 0) {
        return;
      }
      if (local_res8[0] == 0) {
        return;
      }
      if (*param_1 == '\0') {
        return;
      }
    }
  }
  return;
}

