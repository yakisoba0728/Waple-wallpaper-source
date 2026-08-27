// Function: FUN_140110060
// Addr: 140110060
// Size: 1346 bytes


undefined8 FUN_140110060(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  LPCSTR **pppCVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  HMODULE hModule;
  FARPROC pFVar7;
  size_t sVar8;
  LPCSTR ***ppppCVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  LPWSTR lpWideCharStr;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 *puVar17;
  undefined1 auStackY_1c8 [8];
  undefined1 auStackY_1c0 [24];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  LPCSTR **local_170;
  undefined8 uStack_168;
  ulonglong local_160;
  ulonglong local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 local_130 [40];
  char local_108 [208];
  
  puVar17 = auStackY_1c8;
  iVar5 = FUN_140290d80(param_1 + 0x3d8);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x424) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x424) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  FUN_14010c650(param_1,param_2);
  FUN_140290ea0(param_1 + 0x3d8);
  FUN_140016fc0(&local_170);
  FUN_1400187b0(&local_170);
  if (local_160 == 0) {
LAB_140110178:
    local_188 = 0;
    uStack_190 = 0;
    local_198 = (LPWSTR)0x0;
    uStack_180 = 7;
  }
  else {
    ppppCVar9 = &local_170;
    if (0xf < local_158) {
      ppppCVar9 = (LPCSTR ***)local_170;
    }
    iVar5 = MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar9,(int)local_160,(LPWSTR)0x0,0);
    if (iVar5 < 1) goto LAB_140110178;
    local_188 = 0;
    uStack_180 = 0;
    local_198 = (LPWSTR)0x0;
    uStack_190 = 0;
    FUN_1400167e0(&local_198,0,(longlong)iVar5);
    lpWideCharStr = (LPWSTR)&local_198;
    if (7 < uStack_180) {
      lpWideCharStr = local_198;
    }
    ppppCVar9 = &local_170;
    if (0xf < local_158) {
      ppppCVar9 = (LPCSTR ***)local_170;
    }
    MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar9,(int)local_160,lpWideCharStr,iVar5);
  }
  local_150 = (undefined4)local_198;
  uStack_14c = local_198._4_4_;
  uStack_148 = (uint)uStack_190;
  uStack_144 = uStack_190._4_4_;
  local_140 = (undefined4)local_188;
  uStack_13c = local_188._4_4_;
  uStack_138 = (undefined4)uStack_180;
  uStack_134 = uStack_180._4_4_;
  if (local_158 < 0x10) {
LAB_1401101fb:
    FUN_140053f80(&local_150,local_130);
    FUN_140060990(&local_198,&DAT_140487000);
    cVar4 = FUN_140118880(local_130);
    FUN_140016770(&local_198);
    if (cVar4 != '\0') {
      hModule = LoadLibraryExW(L"resourceutil64.dll",(HANDLE)0x0,0x1000);
      if (hModule == (HMODULE)0x0) {
        DVar6 = GetLastError();
        FUN_140098760("Error loading library %S (%i).\n",L"resourceutil64.dll",DVar6);
      }
      else {
        pFVar7 = GetProcAddress(hModule,"GetDominantColorFromImage");
        if (pFVar7 != (FARPROC)0x0) {
          puVar10 = &local_150;
          if (7 < CONCAT44(uStack_134,uStack_138)) {
            puVar10 = (undefined4 *)CONCAT44(uStack_14c,local_150);
          }
          uVar14 = (*pFVar7)(puVar10);
          FUN_1404217a0(local_108,0,0xc4);
          FUN_1400162a0(local_108,0xc4,"%.5f %.5f %.5f",
                        (double)((float)(uVar14 & 0xff) / DAT_14049290c));
          local_160 = 0;
          local_158 = 0;
          local_170 = (LPCSTR **)0x0;
          uStack_168 = 0;
          sVar8 = strlen(local_108);
          FUN_140017480(&local_170,local_108,sVar8);
          uVar14 = local_158;
          pppCVar3 = local_170;
          uStack_190 = CONCAT71(uStack_190._1_7_,4);
          ppppCVar9 = &local_170;
          if (0xf < local_158) {
            ppppCVar9 = (LPCSTR ***)local_170;
          }
          uVar15 = local_160 & 0xffffffff;
          puVar10 = (undefined4 *)_malloc_base(uVar15 + 5);
          if (puVar10 == (undefined4 *)0x0) goto LAB_14011056b;
          uVar16 = (uint)uStack_190 | 0x100;
          *puVar10 = (int)local_160;
          FUN_1404210f0(puVar10 + 1,ppppCVar9,local_160 & 0xffffffff);
          *(undefined1 *)((longlong)puVar10 + uVar15 + 4) = 0;
          uVar11 = FUN_140086de0(param_2,"schemecolor","");
          plVar12 = (longlong *)FUN_140086de0(uVar11,"value");
          lVar13 = plVar12[1];
          *(uint *)(plVar12 + 1) = uVar16;
          uStack_190 = CONCAT44(uStack_190._4_4_,(int)lVar13);
          local_198 = (LPWSTR)*plVar12;
          *plVar12 = (longlong)puVar10;
          lVar13 = plVar12[2];
          plVar12[2] = 0;
          local_178 = plVar12[4];
          uStack_180 = plVar12[3];
          plVar12[3] = 0;
          plVar12[4] = 0;
          local_188 = lVar13;
          FUN_140086d30(&local_198);
          if (lVar13 != 0) {
            FUN_140017240(lVar13 + 0x40);
            FUN_140017240(lVar13 + 0x20);
            FUN_140017240(lVar13);
            thunk_FUN_14028af80(lVar13,0x60);
          }
          if (0xf < uVar14) {
            uVar15 = uVar14 + 1;
            ppppCVar9 = (LPCSTR ***)pppCVar3;
            if (0xfff < uVar15) {
              ppppCVar9 = (LPCSTR ***)pppCVar3[-1];
              if (0x1f < (ulonglong)((longlong)pppCVar3 + (-8 - (longlong)ppppCVar9)))
              goto LAB_140110564;
              uVar15 = uVar14 + 0x28;
            }
            thunk_FUN_14028af80(ppppCVar9,uVar15);
          }
        }
        FreeLibrary(hModule);
      }
    }
    uVar16 = *(uint *)(param_1 + 0x1b8);
    FUN_140104b60(param_2,(uVar16 >> 5 & 1) << 2 | (uVar16 >> 7 & 1) << 3 | uVar16 >> 4 & 1 | 0xd0);
    FUN_14010d580(param_1,param_2);
    FUN_140016770(local_130);
    uVar14 = CONCAT44(uStack_134,uStack_138);
    if (uVar14 < 8) {
      return param_2;
    }
    lVar2 = CONCAT44(uStack_14c,local_150);
    uVar15 = uVar14 * 2 + 2;
    lVar13 = lVar2;
    if (uVar15 < 0x1000) {
LAB_14011052f:
      thunk_FUN_14028af80(lVar13,uVar15);
      return param_2;
    }
    lVar13 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar13) - 8U < 0x20) {
      uVar15 = uVar14 * 2 + 0x29;
      goto LAB_14011052f;
    }
  }
  else {
    uVar14 = local_158 + 1;
    ppppCVar9 = (LPCSTR ***)local_170;
    if (uVar14 < 0x1000) {
LAB_1401101f6:
      thunk_FUN_14028af80(ppppCVar9,uVar14);
      goto LAB_1401101fb;
    }
    ppppCVar9 = (LPCSTR ***)local_170[-1];
    if ((ulonglong)((longlong)local_170 + (-8 - (longlong)ppppCVar9)) < 0x20) {
      uVar14 = local_158 + 0x28;
      goto LAB_1401101f6;
    }
  }
LAB_140110564:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar17 = auStackY_1c0;
LAB_14011056b:
  *(undefined8 *)(puVar17 + -8) = 0x14011057c;
  FUN_140017170(puVar17 + 0x30,
                "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
               );
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar17 + -8) = &UNK_140110586;
  FUN_140084bc0(puVar17 + 0x30);
}

