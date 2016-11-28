/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#include "SWGPetApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGPetApi::SWGPetApi() {}

SWGPetApi::~SWGPetApi() {}

SWGPetApi::SWGPetApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGPetApi::addPet(SWGPet body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/pet");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = body.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPetApi::addPetCallback);

    worker->execute(&input);
}

void
SWGPetApi::addPetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit addPetSignal();
}
void
SWGPetApi::deletePet(qint64 pet_id, QString* api_key) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/pet/{petId}");

    QString pet_idPathParam("{"); pet_idPathParam.append("petId").append("}");
    fullPath.replace(pet_idPathParam, stringValue(pet_id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    


    // TODO: add header support

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPetApi::deletePetCallback);

    worker->execute(&input);
}

void
SWGPetApi::deletePetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deletePetSignal();
}
void
SWGPetApi::findPetsByStatus(QList<QString*>* status) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/pet/findByStatus");




    if (status->size() > 0) {
      if (QString("csv").indexOf("multi") == 0) {
        foreach(QString* t, *status) {
          if (fullPath.indexOf("?") > 0)
            fullPath.append("&");
          else 
            fullPath.append("?");
          fullPath.append("status=").append(stringValue(t));
        }
      }
      else if (QString("csv").indexOf("ssv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else 
          fullPath.append("?");
        fullPath.append("status=");
        qint32 count = 0;
        foreach(QString* t, *status) {
          if (count > 0) {
            fullPath.append(" ");
          }
          fullPath.append(stringValue(t));
        }
      }
      else if (QString("csv").indexOf("tsv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else 
          fullPath.append("?");
        fullPath.append("status=");
        qint32 count = 0;
        foreach(QString* t, *status) {
          if (count > 0) {
            fullPath.append("\t");
          }
          fullPath.append(stringValue(t));
        }
      }
    }


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPetApi::findPetsByStatusCallback);

    worker->execute(&input);
}

void
SWGPetApi::findPetsByStatusCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGPet*>* output = new QList<SWGPet*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGPet* o = new SWGPet();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }

    

    worker->deleteLater();

    emit findPetsByStatusSignal(output);
    
}
void
SWGPetApi::findPetsByTags(QList<QString*>* tags) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/pet/findByTags");




    if (tags->size() > 0) {
      if (QString("csv").indexOf("multi") == 0) {
        foreach(QString* t, *tags) {
          if (fullPath.indexOf("?") > 0)
            fullPath.append("&");
          else 
            fullPath.append("?");
          fullPath.append("tags=").append(stringValue(t));
        }
      }
      else if (QString("csv").indexOf("ssv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else 
          fullPath.append("?");
        fullPath.append("tags=");
        qint32 count = 0;
        foreach(QString* t, *tags) {
          if (count > 0) {
            fullPath.append(" ");
          }
          fullPath.append(stringValue(t));
        }
      }
      else if (QString("csv").indexOf("tsv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else 
          fullPath.append("?");
        fullPath.append("tags=");
        qint32 count = 0;
        foreach(QString* t, *tags) {
          if (count > 0) {
            fullPath.append("\t");
          }
          fullPath.append(stringValue(t));
        }
      }
    }


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPetApi::findPetsByTagsCallback);

    worker->execute(&input);
}

void
SWGPetApi::findPetsByTagsCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGPet*>* output = new QList<SWGPet*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGPet* o = new SWGPet();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }

    

    worker->deleteLater();

    emit findPetsByTagsSignal(output);
    
}
void
SWGPetApi::getPetById(qint64 pet_id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/pet/{petId}");

    QString pet_idPathParam("{"); pet_idPathParam.append("petId").append("}");
    fullPath.replace(pet_idPathParam, stringValue(pet_id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPetApi::getPetByIdCallback);

    worker->execute(&input);
}

void
SWGPetApi::getPetByIdCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPet* output = static_cast<SWGPet*>(create(json, QString("SWGPet")));
    

    worker->deleteLater();

    emit getPetByIdSignal(output);
    
}
void
SWGPetApi::updatePet(SWGPet body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/pet");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = body.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPetApi::updatePetCallback);

    worker->execute(&input);
}

void
SWGPetApi::updatePetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit updatePetSignal();
}
void
SWGPetApi::updatePetWithForm(qint64 pet_id, QString* name, QString* status) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/pet/{petId}");

    QString pet_idPathParam("{"); pet_idPathParam.append("petId").append("}");
    fullPath.replace(pet_idPathParam, stringValue(pet_id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    if (name != nullptr) {
        input.add_var("name", *name);
    }
if (status != nullptr) {
        input.add_var("status", *status);
    }




    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPetApi::updatePetWithFormCallback);

    worker->execute(&input);
}

void
SWGPetApi::updatePetWithFormCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit updatePetWithFormSignal();
}
void
SWGPetApi::uploadFile(qint64 pet_id, QString* additional_metadata, SWGHttpRequestInputFileElement* file) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/pet/{petId}/uploadImage");

    QString pet_idPathParam("{"); pet_idPathParam.append("petId").append("}");
    fullPath.replace(pet_idPathParam, stringValue(pet_id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    if (additional_metadata != nullptr) {
        input.add_var("additionalMetadata", *additional_metadata);
    }
if (file != nullptr) {
        input.add_file("file", (*file).local_filename, (*file).request_filename, (*file).mime_type);
    }




    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPetApi::uploadFileCallback);

    worker->execute(&input);
}

void
SWGPetApi::uploadFileCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGApiResponse* output = static_cast<SWGApiResponse*>(create(json, QString("SWGApiResponse")));
    

    worker->deleteLater();

    emit uploadFileSignal(output);
    
}
} /* namespace Swagger */
