#pragma once

#include <Geode/Geode.hpp>

using namespace geode::prelude;

class JoinPopup : public Popup{
    protected:
        TextInput* m_addressInput;
        TextInput* m_passInput;
        
        bool init() override;
        void OnJoin(CCObject*);
    public:
        static JoinPopup* create();
};
